//
//  ViewController.swift
//  ObjectsWithCode
//
//  Created by zeynep aslan on 18.12.2024.
//

import UIKit

class ViewController: UIViewController {

    let myLabel = UILabel()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        
        let width =  view.frame.size.width
        let height = view.frame.size.height
        
        myLabel.text = "Test label"
        myLabel.textAlignment = .center
        myLabel.frame = CGRect(x: width * 0.5 - width * 0.8 / 2, y: height * 0.5 - 50 / 2, width: width * 0.8, height: 50)
        view.addSubview(myLabel)
        
        let myButton = UIButton()
        myButton.setTitle("My Button", for: UIControl.State.normal)
        myButton.setTitleColor(UIColor.blue, for: UIControl.State.normal)
        myButton.frame = CGRect(x: width * 0.5 - 50, y: height * 0.5, width: 100, height: 200)
        view.addSubview(myButton)
        
        myButton.addTarget(self, action: #selector(ViewController.myAction), for: UIControl.Event.touchUpInside)
        
    }

    @objc func myAction (){
        myLabel.text = "Tapped"
    }
    

}

