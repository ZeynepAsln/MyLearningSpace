//
//  Musicians.swift
//  MusicianProject
//
//  Created by ZEYNEP ASLAN on 3.07.2025.
//

import Foundation

class Musicians{
    
    enum MusicianType {
        case LuidGuitar
        case Vocalist
        case Drummer
        case Bassist
        case Violenist
    }
    
    
    //Property
    var name : String = ""
    var age : Int = 0
    var instrument : String = ""
    var type : MusicianType
    
    //Initializer (Constructor)
    init (nameInit : String, ageInit : Int, instrumentInit : String, typeInit : MusicianType) {
        name = nameInit
        age = ageInit
        instrument = instrumentInit
        type = typeInit
    }
    
    func sing() {
        print("Nothing else matters")
    }
}



