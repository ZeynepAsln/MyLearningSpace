import UIKit

// ARRAYS

var myFavoriteMovies = ["Pulp Fiction","Kill Bill","Reservoir Dogs",5,true] as [Any]
//as -> casting
//any -> any object
//birden fazla değişken tipini saklamasını sağlar



var myStringArray = ["Test2","Test3","Test"]

myStringArray[0].uppercased() //Any kullanmış olsaydık bu işlemleri yapamazdık
myStringArray.count
myStringArray[myStringArray.count-2]
myStringArray.last
myStringArray.sort()



var myNumberArray = [1,2,3,4,5]
myNumberArray.append(6)
myNumberArray.last




// SETS


var mySet : Set = [1,2,3,4,5]  //unordered collection, unique elements
mySet.first

var myStringSet : Set = ["a","b","c","a"]


var myInternetArray = [1,2,3,4,2,6,7,2,4]
var myInternetSet = Set(myInternetArray)
print(myInternetArray)
print(myInternetSet)


var mySet1 : Set = [1,2,3]
var mySet2 : Set = [3,4,5]

var mySet3 = mySet1.union(mySet2)
print(mySet3)





// DICTIONARY
// key-value pairing


var myFavoriteDirectors = ["Pulp Fiction" : "Tarantino" , "Lock, Stock" : "Guy Ritchie" , "The Dark Knight" : "Christopher Nolan"]

myFavoriteDirectors["Pulp Fiction"] // arraydan farklı olarak içerisine boyut değil key yazıyoruz
myFavoriteDirectors["The Dark Knight"]

myFavoriteDirectors["Pulp Fiction"] = "Quentin Tarantino"
print(myFavoriteDirectors)


var myDictionary = ["Run": 100 , "Swim": 200 , "Basketball": 300]
myDictionary["Run"]
