#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000015 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000019 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000028 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (void);
// 0x00000029 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000078 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000081 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000087 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000088 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000089 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000008A System.Void System.Linq.Set`1::Resize()
// 0x0000008B System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000008C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000008D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000090 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000091 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000092 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000093 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000094 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000095 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000096 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000097 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000098 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000099 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000009A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000009B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000009C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000009D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000009E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A0 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A1 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000A2 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AD System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AE System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000AF System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000B0 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B1 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B2 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000BA System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000C2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000C5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000C7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[200] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[200] = 
{
	4347,
	4347,
	4480,
	4480,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4285,
	-1,
	4285,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[65] = 
{
	{ 0x02000004, { 103, 4 } },
	{ 0x02000005, { 107, 9 } },
	{ 0x02000006, { 118, 7 } },
	{ 0x02000007, { 127, 10 } },
	{ 0x02000008, { 139, 11 } },
	{ 0x02000009, { 153, 9 } },
	{ 0x0200000A, { 165, 12 } },
	{ 0x0200000B, { 180, 1 } },
	{ 0x0200000C, { 181, 2 } },
	{ 0x0200000D, { 183, 12 } },
	{ 0x0200000E, { 195, 11 } },
	{ 0x0200000F, { 206, 11 } },
	{ 0x02000010, { 217, 6 } },
	{ 0x02000011, { 223, 6 } },
	{ 0x02000013, { 229, 8 } },
	{ 0x02000015, { 237, 3 } },
	{ 0x02000016, { 242, 5 } },
	{ 0x02000017, { 247, 7 } },
	{ 0x02000018, { 254, 3 } },
	{ 0x02000019, { 257, 7 } },
	{ 0x0200001A, { 264, 4 } },
	{ 0x0200001B, { 268, 36 } },
	{ 0x0200001D, { 304, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 1 } },
	{ 0x06000012, { 43, 2 } },
	{ 0x06000013, { 45, 1 } },
	{ 0x06000014, { 46, 5 } },
	{ 0x06000015, { 51, 3 } },
	{ 0x06000016, { 54, 2 } },
	{ 0x06000017, { 56, 2 } },
	{ 0x06000018, { 58, 2 } },
	{ 0x06000019, { 60, 4 } },
	{ 0x0600001A, { 64, 4 } },
	{ 0x0600001B, { 68, 3 } },
	{ 0x0600001C, { 71, 4 } },
	{ 0x0600001D, { 75, 4 } },
	{ 0x0600001E, { 79, 3 } },
	{ 0x0600001F, { 82, 3 } },
	{ 0x06000020, { 85, 1 } },
	{ 0x06000021, { 86, 3 } },
	{ 0x06000022, { 89, 2 } },
	{ 0x06000023, { 91, 3 } },
	{ 0x06000024, { 94, 2 } },
	{ 0x06000025, { 96, 5 } },
	{ 0x06000027, { 101, 1 } },
	{ 0x06000029, { 102, 1 } },
	{ 0x06000039, { 116, 2 } },
	{ 0x0600003E, { 125, 2 } },
	{ 0x06000043, { 137, 2 } },
	{ 0x06000049, { 150, 3 } },
	{ 0x0600004E, { 162, 3 } },
	{ 0x06000053, { 177, 3 } },
	{ 0x0600008F, { 240, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[306] = 
{
	{ (Il2CppRGCTXDataType)2, 2233 },
	{ (Il2CppRGCTXDataType)3, 9563 },
	{ (Il2CppRGCTXDataType)2, 3691 },
	{ (Il2CppRGCTXDataType)2, 3195 },
	{ (Il2CppRGCTXDataType)3, 18512 },
	{ (Il2CppRGCTXDataType)2, 2375 },
	{ (Il2CppRGCTXDataType)2, 3202 },
	{ (Il2CppRGCTXDataType)3, 18620 },
	{ (Il2CppRGCTXDataType)2, 3197 },
	{ (Il2CppRGCTXDataType)3, 18545 },
	{ (Il2CppRGCTXDataType)2, 2234 },
	{ (Il2CppRGCTXDataType)3, 9564 },
	{ (Il2CppRGCTXDataType)2, 3719 },
	{ (Il2CppRGCTXDataType)2, 3204 },
	{ (Il2CppRGCTXDataType)3, 18653 },
	{ (Il2CppRGCTXDataType)2, 2398 },
	{ (Il2CppRGCTXDataType)2, 3212 },
	{ (Il2CppRGCTXDataType)3, 19080 },
	{ (Il2CppRGCTXDataType)2, 3208 },
	{ (Il2CppRGCTXDataType)3, 18848 },
	{ (Il2CppRGCTXDataType)2, 732 },
	{ (Il2CppRGCTXDataType)3, 79 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)2, 1350 },
	{ (Il2CppRGCTXDataType)3, 7318 },
	{ (Il2CppRGCTXDataType)2, 733 },
	{ (Il2CppRGCTXDataType)3, 103 },
	{ (Il2CppRGCTXDataType)3, 104 },
	{ (Il2CppRGCTXDataType)2, 1365 },
	{ (Il2CppRGCTXDataType)3, 7324 },
	{ (Il2CppRGCTXDataType)3, 22231 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 2850 },
	{ (Il2CppRGCTXDataType)3, 15166 },
	{ (Il2CppRGCTXDataType)3, 8191 },
	{ (Il2CppRGCTXDataType)3, 22137 },
	{ (Il2CppRGCTXDataType)2, 736 },
	{ (Il2CppRGCTXDataType)3, 246 },
	{ (Il2CppRGCTXDataType)3, 22147 },
	{ (Il2CppRGCTXDataType)2, 740 },
	{ (Il2CppRGCTXDataType)3, 298 },
	{ (Il2CppRGCTXDataType)3, 22180 },
	{ (Il2CppRGCTXDataType)2, 745 },
	{ (Il2CppRGCTXDataType)3, 339 },
	{ (Il2CppRGCTXDataType)3, 22242 },
	{ (Il2CppRGCTXDataType)3, 6567 },
	{ (Il2CppRGCTXDataType)2, 1220 },
	{ (Il2CppRGCTXDataType)2, 1716 },
	{ (Il2CppRGCTXDataType)2, 1847 },
	{ (Il2CppRGCTXDataType)2, 1942 },
	{ (Il2CppRGCTXDataType)2, 852 },
	{ (Il2CppRGCTXDataType)3, 1474 },
	{ (Il2CppRGCTXDataType)3, 1475 },
	{ (Il2CppRGCTXDataType)2, 2376 },
	{ (Il2CppRGCTXDataType)3, 10532 },
	{ (Il2CppRGCTXDataType)2, 1717 },
	{ (Il2CppRGCTXDataType)3, 22025 },
	{ (Il2CppRGCTXDataType)2, 734 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)2, 2123 },
	{ (Il2CppRGCTXDataType)2, 1595 },
	{ (Il2CppRGCTXDataType)2, 1732 },
	{ (Il2CppRGCTXDataType)2, 1850 },
	{ (Il2CppRGCTXDataType)2, 2124 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)2, 1733 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)2, 1734 },
	{ (Il2CppRGCTXDataType)2, 1852 },
	{ (Il2CppRGCTXDataType)3, 7320 },
	{ (Il2CppRGCTXDataType)2, 2125 },
	{ (Il2CppRGCTXDataType)2, 1597 },
	{ (Il2CppRGCTXDataType)2, 1735 },
	{ (Il2CppRGCTXDataType)2, 1853 },
	{ (Il2CppRGCTXDataType)2, 2126 },
	{ (Il2CppRGCTXDataType)2, 1598 },
	{ (Il2CppRGCTXDataType)2, 1736 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)2, 1737 },
	{ (Il2CppRGCTXDataType)2, 1855 },
	{ (Il2CppRGCTXDataType)3, 7321 },
	{ (Il2CppRGCTXDataType)2, 2122 },
	{ (Il2CppRGCTXDataType)2, 1731 },
	{ (Il2CppRGCTXDataType)2, 1849 },
	{ (Il2CppRGCTXDataType)2, 1711 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)2, 1845 },
	{ (Il2CppRGCTXDataType)3, 7317 },
	{ (Il2CppRGCTXDataType)2, 1594 },
	{ (Il2CppRGCTXDataType)2, 1727 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)2, 1848 },
	{ (Il2CppRGCTXDataType)3, 7319 },
	{ (Il2CppRGCTXDataType)2, 1593 },
	{ (Il2CppRGCTXDataType)3, 22110 },
	{ (Il2CppRGCTXDataType)3, 6566 },
	{ (Il2CppRGCTXDataType)2, 1219 },
	{ (Il2CppRGCTXDataType)2, 1714 },
	{ (Il2CppRGCTXDataType)2, 1846 },
	{ (Il2CppRGCTXDataType)2, 1941 },
	{ (Il2CppRGCTXDataType)3, 22185 },
	{ (Il2CppRGCTXDataType)3, 22184 },
	{ (Il2CppRGCTXDataType)3, 9565 },
	{ (Il2CppRGCTXDataType)3, 9567 },
	{ (Il2CppRGCTXDataType)2, 503 },
	{ (Il2CppRGCTXDataType)3, 9566 },
	{ (Il2CppRGCTXDataType)3, 9575 },
	{ (Il2CppRGCTXDataType)2, 2237 },
	{ (Il2CppRGCTXDataType)2, 3198 },
	{ (Il2CppRGCTXDataType)3, 18546 },
	{ (Il2CppRGCTXDataType)3, 9576 },
	{ (Il2CppRGCTXDataType)2, 1789 },
	{ (Il2CppRGCTXDataType)2, 1885 },
	{ (Il2CppRGCTXDataType)3, 7332 },
	{ (Il2CppRGCTXDataType)3, 22029 },
	{ (Il2CppRGCTXDataType)2, 3209 },
	{ (Il2CppRGCTXDataType)3, 18849 },
	{ (Il2CppRGCTXDataType)3, 9568 },
	{ (Il2CppRGCTXDataType)2, 2236 },
	{ (Il2CppRGCTXDataType)2, 3196 },
	{ (Il2CppRGCTXDataType)3, 18513 },
	{ (Il2CppRGCTXDataType)3, 7331 },
	{ (Il2CppRGCTXDataType)3, 9569 },
	{ (Il2CppRGCTXDataType)3, 22028 },
	{ (Il2CppRGCTXDataType)2, 3205 },
	{ (Il2CppRGCTXDataType)3, 18654 },
	{ (Il2CppRGCTXDataType)3, 9582 },
	{ (Il2CppRGCTXDataType)2, 2238 },
	{ (Il2CppRGCTXDataType)2, 3203 },
	{ (Il2CppRGCTXDataType)3, 18621 },
	{ (Il2CppRGCTXDataType)3, 10592 },
	{ (Il2CppRGCTXDataType)3, 5194 },
	{ (Il2CppRGCTXDataType)3, 7333 },
	{ (Il2CppRGCTXDataType)3, 5193 },
	{ (Il2CppRGCTXDataType)3, 9583 },
	{ (Il2CppRGCTXDataType)3, 22030 },
	{ (Il2CppRGCTXDataType)2, 3213 },
	{ (Il2CppRGCTXDataType)3, 19081 },
	{ (Il2CppRGCTXDataType)3, 9596 },
	{ (Il2CppRGCTXDataType)2, 2240 },
	{ (Il2CppRGCTXDataType)2, 3211 },
	{ (Il2CppRGCTXDataType)3, 18851 },
	{ (Il2CppRGCTXDataType)3, 9597 },
	{ (Il2CppRGCTXDataType)2, 1792 },
	{ (Il2CppRGCTXDataType)2, 1888 },
	{ (Il2CppRGCTXDataType)3, 7337 },
	{ (Il2CppRGCTXDataType)3, 7336 },
	{ (Il2CppRGCTXDataType)2, 3200 },
	{ (Il2CppRGCTXDataType)3, 18548 },
	{ (Il2CppRGCTXDataType)3, 22043 },
	{ (Il2CppRGCTXDataType)2, 3210 },
	{ (Il2CppRGCTXDataType)3, 18850 },
	{ (Il2CppRGCTXDataType)3, 9589 },
	{ (Il2CppRGCTXDataType)2, 2239 },
	{ (Il2CppRGCTXDataType)2, 3207 },
	{ (Il2CppRGCTXDataType)3, 18656 },
	{ (Il2CppRGCTXDataType)3, 7335 },
	{ (Il2CppRGCTXDataType)3, 7334 },
	{ (Il2CppRGCTXDataType)3, 9590 },
	{ (Il2CppRGCTXDataType)2, 3199 },
	{ (Il2CppRGCTXDataType)3, 18547 },
	{ (Il2CppRGCTXDataType)3, 22042 },
	{ (Il2CppRGCTXDataType)2, 3206 },
	{ (Il2CppRGCTXDataType)3, 18655 },
	{ (Il2CppRGCTXDataType)3, 9603 },
	{ (Il2CppRGCTXDataType)2, 2241 },
	{ (Il2CppRGCTXDataType)2, 3215 },
	{ (Il2CppRGCTXDataType)3, 19083 },
	{ (Il2CppRGCTXDataType)3, 10593 },
	{ (Il2CppRGCTXDataType)3, 5196 },
	{ (Il2CppRGCTXDataType)3, 7339 },
	{ (Il2CppRGCTXDataType)3, 7338 },
	{ (Il2CppRGCTXDataType)3, 5195 },
	{ (Il2CppRGCTXDataType)3, 9604 },
	{ (Il2CppRGCTXDataType)2, 3201 },
	{ (Il2CppRGCTXDataType)3, 18549 },
	{ (Il2CppRGCTXDataType)3, 22044 },
	{ (Il2CppRGCTXDataType)2, 3214 },
	{ (Il2CppRGCTXDataType)3, 19082 },
	{ (Il2CppRGCTXDataType)3, 7328 },
	{ (Il2CppRGCTXDataType)3, 7329 },
	{ (Il2CppRGCTXDataType)3, 7340 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)2, 1784 },
	{ (Il2CppRGCTXDataType)2, 1881 },
	{ (Il2CppRGCTXDataType)3, 7330 },
	{ (Il2CppRGCTXDataType)2, 1799 },
	{ (Il2CppRGCTXDataType)2, 1901 },
	{ (Il2CppRGCTXDataType)3, 363 },
	{ (Il2CppRGCTXDataType)2, 655 },
	{ (Il2CppRGCTXDataType)2, 748 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)3, 362 },
	{ (Il2CppRGCTXDataType)3, 248 },
	{ (Il2CppRGCTXDataType)2, 2965 },
	{ (Il2CppRGCTXDataType)3, 17049 },
	{ (Il2CppRGCTXDataType)2, 1775 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)3, 17050 },
	{ (Il2CppRGCTXDataType)3, 250 },
	{ (Il2CppRGCTXDataType)2, 496 },
	{ (Il2CppRGCTXDataType)2, 737 },
	{ (Il2CppRGCTXDataType)3, 247 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)3, 300 },
	{ (Il2CppRGCTXDataType)2, 2967 },
	{ (Il2CppRGCTXDataType)3, 17051 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)2, 1878 },
	{ (Il2CppRGCTXDataType)3, 17052 },
	{ (Il2CppRGCTXDataType)3, 302 },
	{ (Il2CppRGCTXDataType)2, 498 },
	{ (Il2CppRGCTXDataType)2, 741 },
	{ (Il2CppRGCTXDataType)3, 299 },
	{ (Il2CppRGCTXDataType)3, 301 },
	{ (Il2CppRGCTXDataType)2, 853 },
	{ (Il2CppRGCTXDataType)3, 1476 },
	{ (Il2CppRGCTXDataType)2, 500 },
	{ (Il2CppRGCTXDataType)2, 746 },
	{ (Il2CppRGCTXDataType)3, 340 },
	{ (Il2CppRGCTXDataType)3, 341 },
	{ (Il2CppRGCTXDataType)3, 225 },
	{ (Il2CppRGCTXDataType)2, 494 },
	{ (Il2CppRGCTXDataType)3, 227 },
	{ (Il2CppRGCTXDataType)2, 735 },
	{ (Il2CppRGCTXDataType)3, 224 },
	{ (Il2CppRGCTXDataType)3, 226 },
	{ (Il2CppRGCTXDataType)3, 6600 },
	{ (Il2CppRGCTXDataType)2, 1234 },
	{ (Il2CppRGCTXDataType)2, 3817 },
	{ (Il2CppRGCTXDataType)3, 17046 },
	{ (Il2CppRGCTXDataType)3, 17047 },
	{ (Il2CppRGCTXDataType)2, 1957 },
	{ (Il2CppRGCTXDataType)3, 17048 },
	{ (Il2CppRGCTXDataType)2, 424 },
	{ (Il2CppRGCTXDataType)2, 742 },
	{ (Il2CppRGCTXDataType)3, 312 },
	{ (Il2CppRGCTXDataType)3, 15153 },
	{ (Il2CppRGCTXDataType)2, 2851 },
	{ (Il2CppRGCTXDataType)3, 15167 },
	{ (Il2CppRGCTXDataType)2, 855 },
	{ (Il2CppRGCTXDataType)3, 1477 },
	{ (Il2CppRGCTXDataType)3, 15159 },
	{ (Il2CppRGCTXDataType)3, 5168 },
	{ (Il2CppRGCTXDataType)2, 537 },
	{ (Il2CppRGCTXDataType)3, 15154 },
	{ (Il2CppRGCTXDataType)2, 2847 },
	{ (Il2CppRGCTXDataType)3, 1521 },
	{ (Il2CppRGCTXDataType)2, 869 },
	{ (Il2CppRGCTXDataType)2, 1192 },
	{ (Il2CppRGCTXDataType)3, 5174 },
	{ (Il2CppRGCTXDataType)3, 15155 },
	{ (Il2CppRGCTXDataType)3, 5163 },
	{ (Il2CppRGCTXDataType)3, 5164 },
	{ (Il2CppRGCTXDataType)3, 5162 },
	{ (Il2CppRGCTXDataType)3, 5165 },
	{ (Il2CppRGCTXDataType)2, 1188 },
	{ (Il2CppRGCTXDataType)2, 3776 },
	{ (Il2CppRGCTXDataType)3, 7326 },
	{ (Il2CppRGCTXDataType)3, 5167 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)3, 5166 },
	{ (Il2CppRGCTXDataType)2, 1600 },
	{ (Il2CppRGCTXDataType)2, 3722 },
	{ (Il2CppRGCTXDataType)2, 1751 },
	{ (Il2CppRGCTXDataType)2, 1856 },
	{ (Il2CppRGCTXDataType)3, 6583 },
	{ (Il2CppRGCTXDataType)2, 1228 },
	{ (Il2CppRGCTXDataType)3, 7913 },
	{ (Il2CppRGCTXDataType)3, 7914 },
	{ (Il2CppRGCTXDataType)2, 1560 },
	{ (Il2CppRGCTXDataType)3, 7917 },
	{ (Il2CppRGCTXDataType)2, 1560 },
	{ (Il2CppRGCTXDataType)3, 7919 },
	{ (Il2CppRGCTXDataType)2, 1601 },
	{ (Il2CppRGCTXDataType)3, 7923 },
	{ (Il2CppRGCTXDataType)3, 7928 },
	{ (Il2CppRGCTXDataType)3, 7927 },
	{ (Il2CppRGCTXDataType)2, 3815 },
	{ (Il2CppRGCTXDataType)3, 7916 },
	{ (Il2CppRGCTXDataType)3, 7915 },
	{ (Il2CppRGCTXDataType)3, 7924 },
	{ (Il2CppRGCTXDataType)2, 1952 },
	{ (Il2CppRGCTXDataType)3, 7921 },
	{ (Il2CppRGCTXDataType)3, 22677 },
	{ (Il2CppRGCTXDataType)2, 1194 },
	{ (Il2CppRGCTXDataType)3, 5186 },
	{ (Il2CppRGCTXDataType)1, 1690 },
	{ (Il2CppRGCTXDataType)2, 3734 },
	{ (Il2CppRGCTXDataType)3, 7920 },
	{ (Il2CppRGCTXDataType)1, 3734 },
	{ (Il2CppRGCTXDataType)1, 1952 },
	{ (Il2CppRGCTXDataType)2, 3815 },
	{ (Il2CppRGCTXDataType)2, 3734 },
	{ (Il2CppRGCTXDataType)2, 1754 },
	{ (Il2CppRGCTXDataType)2, 1859 },
	{ (Il2CppRGCTXDataType)3, 7918 },
	{ (Il2CppRGCTXDataType)3, 7925 },
	{ (Il2CppRGCTXDataType)3, 7926 },
	{ (Il2CppRGCTXDataType)3, 7922 },
	{ (Il2CppRGCTXDataType)3, 7929 },
	{ (Il2CppRGCTXDataType)2, 355 },
	{ (Il2CppRGCTXDataType)3, 5197 },
	{ (Il2CppRGCTXDataType)2, 515 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	200,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	65,
	s_rgctxIndices,
	306,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
