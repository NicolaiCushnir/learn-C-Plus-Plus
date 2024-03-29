### Stack Overflow

>>> Есть ли другие, менее обсуждаемые, веские причины, по которым кто-то предпочел бы ручное управление памятью вместо GC?

Возможно, самая важная невысказанная проблема - это код, который внедряется виртуальной машиной, чтобы заставить ее работать в гармонии с сборщиком мусора. В частности, все сборщики мусора производственного качества незаметно создают барьер записи всякий раз, когда указатель записывается в кучу.

Например, следующая программа на F # создает массив из 10 000 целых чисел и затем обменивает их

```Algorthm
do
  let xs = Array.init 10000 int
  let timer = System.Diagnostics.Stopwatch.StartNew()
  for i=0 to xs.Length-2 do
    for j=i+1 to xs.Length-1 do
      let t = xs.[i]
      xs.[i] <- xs.[j]
      xs.[j] <- t
  printfn "%f" timer.Elapsed.TotalSeconds
```

Измените это значение `int` на, `string` и программа будет работать в 2 раза медленнее, потому что int можно обменивать напрямую, тогда как обмен ссылочными типами должен вызывать два барьера записи.

Еще одна важная ситуация, которую люди любят скрывать под ковриком, - это патологическое поведение обычных ГХ. Сегодня большинство сборщиков мусора являются поколенческими, что означает, что они выделяют выделение в питомник, а затем эвакуируют выживших в старшее поколение (обычно отметка-очистка). Это хорошо работает, когда гипотеза поколений (что объекты умирают молодыми, а старые объекты редко относятся к более новым объектам) верна, потому что большинство объектов в детской мертвы, когда она эффективно подметается. Но объекты не всегда умирают молодыми, а старые объекты иногда полны указателей на новые объекты.

В частности, патологическое поведение сборщика мусора поколений проявляется, когда программа выделяет большую изменяемую структуру данных на основе массива (например, хеш-таблицу, хеш-набор, стек, очередь или кучу), а затем заполняет ее только что выделенными объектами. Эти новые объекты выживают, потому что к ним относятся от более старого объекта, что полностью нарушает гипотезу поколений. Следовательно, решения с использованием GC обычно в 3 раза медленнее, чем необходимо.

FWIW, я считаю, что сборщики мусора с указанием региона могут избежать этих проблем в будущем. В ГК региона марки старое поколение - это собрание бывших питомников. Когда локальная область потока заполняется и обнаруживается, что она содержит наиболее доступные объекты, весь регион может быть логически перенесен в старое поколение без копирования каких-либо объектов, и может быть выделен новый питомник (или неполный старый питомник может быть переработан).

### Garbage Collection in C Plus Plus: 
not be soon ...

**note** Такие языки, как C и C ++, используют динамическое выделение кучи с помощью специальных функций / операторов, таких как mallocи new

### Когда не следует использовать сборку мусора ?
not be soon ...
