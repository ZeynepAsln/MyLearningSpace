//
//  ViewController.swift
//  SimpsonBook
//
//  Created by ZEYNEP ASLAN on 3.07.2025.
//

import UIKit

class ViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {
    

    @IBOutlet weak var tableView: UITableView!
    
    var MySimpsons = [Simpson]()
    var chosenSimpson : Simpson?

    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        tableView.delegate = self
        tableView.dataSource = self
        
        let homer = Simpson(simpsonName: "Homer Simpson", simpsonJob: "Nuclear Safety", simpsonImage: UIImage(named: "Homer_Simpson")!)
        
        let merge = Simpson(simpsonName: "Merge Simpson", simpsonJob: "House Wife", simpsonImage: UIImage(named: "Marge_Simpson")!)
        
        let bart = Simpson(simpsonName: "Bart Simpson", simpsonJob: "Student", simpsonImage: UIImage(named: "Bart_Simpson")!)
        
        let lisa = Simpson(simpsonName: "Lisa Simpson", simpsonJob: "Student", simpsonImage: UIImage(named: "Lisa_Simpson")!)
        
        let bob = Simpson(simpsonName: "Figuran Bob", simpsonJob: "Figuran", simpsonImage: UIImage(named: "Figuran_Bob")!)
        
        let burns = Simpson(simpsonName: "Montgomery Burns", simpsonJob: "Owner", simpsonImage: UIImage(named: "Montgomery_Burns")!)
        
        MySimpsons.append(homer)
        MySimpsons.append(merge)
        MySimpsons.append(bart)
        MySimpsons.append(lisa)
        MySimpsons.append(bob)
        MySimpsons.append(burns)
        
    }
    
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return MySimpsons.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = UITableViewCell()
        cell.textLabel?.text = MySimpsons[indexPath.row].name
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        chosenSimpson = MySimpsons[indexPath.row]
        self.performSegue(withIdentifier: "toDetailsVC", sender: nil)
    }

    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "toDetailsVC" {
            let destinationVC = segue.destination as! detailsVC
            destinationVC.selectedSimpson = chosenSimpson
        }
    }
}

