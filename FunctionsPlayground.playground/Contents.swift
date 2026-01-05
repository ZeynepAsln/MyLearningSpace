import UIKit

func myFunction(){
    print("my function") //fonksiyonu çağırmadığımız için bunu yazmaz
}

print("print")

myFunction() //bu şekilde de çıktı alabiliyoruz



// INPUT & OUTPUT & RETURN

func sumFunction(x: Int, y: Int){
    print(x+y)
}

sumFunction(x: 10,y: 20)

//---------------------------------------------


func sumFunction2(x: Int, y: Int) -> Int { // return ifadesinin türünü belirtiyoruz
    return x+y
}

let myFunctionVariable = sumFunction2(x: 10, y: 20)
print(myFunctionVariable)


//----------------------------------------------


func logicFunction(a: Int, b: Int) -> String {
    if a>b {
        return "Greater"
    }
    else{
        return "Less"
    }
}
