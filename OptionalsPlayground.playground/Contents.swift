import UIKit

var myName : String?  //Soru işareti koyunca opsiyonel yapıyoruz. Belki değer veririz belki vermeyiz anlamında

myName?.uppercased()  //opsiyonel olduğu için soru işareti koymak zorundayız

// myName!.uppercased() //opsiyonelin kesinlikle var olduğunu biliyorsak ünlem koyarız
 

//-------------------------------------

var myAge = "5"

var myInteger = (Int(myAge) ?? 0) * 5  //Eğer girilen stringin bir integer olduğuna emin değilsek iki tane soru işareti koyarız. Integer değil ise yanda girdiğimiz default değere eşitler. Eğer integer olduğuna emin isek de ünlem işareti koyarız


if let myNumber = Int(myAge) {
    print(myNumber * 5)
}
else {
    print("Wrong Input")
}
