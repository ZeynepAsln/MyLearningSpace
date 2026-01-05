//
//  SuperMusician.swift
//  MusicianProject
//
//  Created by ZEYNEP ASLAN on 3.07.2025.
//

import Foundation

class SuperMusician : Musicians {
    
    func sing2() {
        print("enter night")
    }
    
    override func sing() {
        super.sing()
        print("exit light")
    }
}
