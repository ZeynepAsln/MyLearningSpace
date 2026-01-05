//
//  SecondViewController.swift
//  SegueApp
//
//  Created by zeynep aslan on 26.12.2024.
//

import UIKit

class SecondViewController: UIViewController {

    @IBOutlet weak var secondLabel: UILabel!
    @IBOutlet weak var nameLabel: UILabel!
    var myName = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        nameLabel.text = myName
    
    }
    

}
