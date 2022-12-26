package main
 
func main(){

var sayi1 int = 10
var sayi2 int = 20
var toplam int
var fark int
var bolum int
var carpim int

toplam := toplamaIslemi (sayi1,sayi2)
toplam, fark, bolum, carpim, mesaj = dortIslem ( sayi1, sayi2)

fmt.Println(toplam)
fmt.Println(fark)
fmt.Println(bolum)
fmt.Println(carpim)
fmt.Println(mesaj)

func toplamaIslemi (sayi1 int , sayi2 int ) int {
	return sayi1 + sayi2
}

func dortIslem (x int, y int) (int, int, int, int, string ) {
	toplam := x + y
	fark := x - y
	bolum := x / y
	carpim := x * y  
   return toplam, fark, bolum, carpim
}

}