//
//  ViewController.h
//  Temprature Converter
//
//  Created by Sandeep Verma on 08/04/17.
//  Copyright © 2017 Code Maker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *tempratureLabel;
@property (strong, nonatomic) IBOutlet UITextField *tempratureTextbox;
- (IBAction)tempratureButton:(UIButton *)sender;


@end

