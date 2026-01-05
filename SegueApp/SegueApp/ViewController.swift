//
//  ViewController.swift
//  SegueApp
//
//  Created by zeynep aslan on 26.12.2024.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var myLabel: UILabel!
    @IBOutlet weak var nameTextField: UITextField!
    var userName = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        print("viewDidLoad function called")
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        print("viewDidDisappear function called")
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        print("viewWillDisappear function called")
    }
    
    override func viewDidAppear(_ animated: Bool) {
        print("viewDidAppear function called")
    }
    
    override func viewWillAppear(_ animated: Bool) {
        print("viewWillAppear function called")
        nameTextField.text = ""
    }


    
    @IBAction func nextClicked(_ sender: Any) {
        userName = nameTextField.text!
        performSegue(withIdentifier: "toSecondVC", sender: nil)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "toSecondVC" {
            // as
            
            let destinationVC = segue.destination as! SecondViewController
            destinationVC.myName = userName
        }
    }
}

