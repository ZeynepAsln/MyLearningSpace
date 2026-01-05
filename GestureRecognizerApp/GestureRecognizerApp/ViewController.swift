//
//  ViewController.swift
//  GestureRecognizerApp
//
//  Created by zeynep aslan on 5.02.2025.
//

import UIKit

class ViewController: UIViewController {
    var isJerry = true
    
    @IBOutlet weak var imageView: UIImageView!
    @IBOutlet weak var myLabel: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        imageView.isUserInteractionEnabled = true
        let gestureRecognizer = UITapGestureRecognizer(target: self, action: #selector(changeImage))
        imageView.addGestureRecognizer(gestureRecognizer)
    }
    
    @objc func changeImage() {
        
        
        if isJerry == true{
            imageView.image = UIImage(named: "tom")
            myLabel.text = "Tom"
            isJerry = false
        }
        else {
            imageView.image = UIImage(named: "jerry")
            myLabel.text = "Jerry"
            isJerry = true
        }


    }
}
