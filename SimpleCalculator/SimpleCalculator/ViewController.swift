//
//  ViewController.swift
//  SimpleCalculator
//
//  Created by zeynep aslan on 14.12.2024.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var firstTextField: UITextField!
    
    @IBOutlet weak var secondTextField: UITextField!
    
    @IBOutlet weak var resultLabel: UILabel!
    
    var result : Int = 0
    var resultDivide : Double = 0
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    
    
    @IBAction func sumClicked(_ sender: Any) {
        if let firstDigit = Int(firstTextField.text!){
            if let secondDigit = Int(secondTextField.text!){
                result = firstDigit + secondDigit
                resultLabel.text = String(result)
            }
            else{
                resultLabel.text = "Second digit is invalid value"
            }
        }
        else{
            resultLabel.text = "First digit is invalid value"
        }
    }
  
    @IBAction func minusClicked(_ sender: Any) {
        if let firstDigit = Int(firstTextField.text!){
            if let secondDigit = Int(secondTextField.text!){
                result = firstDigit - secondDigit
                resultLabel.text = String(result)
            }
            else{
                resultLabel.text = "Second digit is invalid value"
            }
        }
        else{
            resultLabel.text = "First digit is invalid value"
        }
    }
    
    @IBAction func multiplyClicked(_ sender: Any) {
        if let firstDigit = Int(firstTextField.text!){
            if let secondDigit = Int(secondTextField.text!){
                result = firstDigit * secondDigit
                resultLabel.text = String(result)
            }
            else{
                resultLabel.text = "Second digit is invalid value"
            }
        }
        else{
            resultLabel.text = "First digit is invalid value"
        }
    }
    
    @IBAction func divideClicked(_ sender: Any) {
        if let firstDigit = Double(firstTextField.text!){
            if let secondDigit = Double(secondTextField.text!){
                resultDivide = firstDigit / secondDigit
                resultLabel.text = String(resultDivide)
            }
            else{
                resultLabel.text = "Second digit is invalid value"
            }
        }
        else{
            resultLabel.text = "First digit is invalid value"
        }
    }
}

