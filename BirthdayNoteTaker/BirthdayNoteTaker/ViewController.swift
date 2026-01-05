//
//  ViewController.swift
//  BirthdayNoteTaker
//
//  Created by zeynep aslan on 26.12.2024.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var nameTextField: UITextField!
    @IBOutlet weak var birthdayNameField: UITextField!
    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var birthdayLabel: UILabel!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let storedName = UserDefaults.standard.object(forKey: "names")
        let storedBirthday = UserDefaults.standard.object(forKey: "birthdays")
        
        // Casting - as! vs as? force casting
        // Any
        
        if let myName = storedName as? String{
            nameLabel.text = "Name: \(myName)"
        }
        if let myBirthday = storedBirthday as? String{
            birthdayLabel.text = "Birthday: \(myBirthday)"
        }
    }

    
    @IBAction func saveClicked(_ sender: Any) {
        UserDefaults.standard.set(nameTextField.text, forKey: "names")
        UserDefaults.standard.set(birthdayNameField.text, forKey: "birthdays")
        //UserDefaults.standard.synchronize()
        
        nameLabel.text = "Name: \(nameTextField.text!)"
        birthdayLabel.text = "Birthday: \(birthdayNameField.text!)"
    }
    
    
    @IBAction func deleteClicked(_ sender: Any) {
        let storedName = UserDefaults.standard.object(forKey: "names")
        let storedBirthday = UserDefaults.standard.object(forKey: "birthdays")
        
        if (storedName as? String) != nil {
            UserDefaults.standard.removeObject(forKey: "names")
            nameLabel.text = "Name : "
        }
        
        if (storedBirthday as? String) != nil {
            UserDefaults.standard.removeObject(forKey: "birthdays")
            birthdayLabel.text = "Birthday : "
        }
    }
}

