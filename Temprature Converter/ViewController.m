//
//  ViewController.m
//  Temprature Converter
//
//  Created by Sandeep Verma on 08/04/17.
//  Copyright © 2017 Code Maker. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)tempratureButton:(UIButton *)sender
{
    // read the value entered in textbox by the user/.
    float temprature = [self.tempratureTextbox.text floatValue];
    // enter the formula to convert farenheit into celcius/
    float celciustemprature = (temprature - 32) * 5/9;
    // showing the result into the label after conversion/
    self.tempratureLabel.text = [NSString stringWithFormat:@"%f",celciustemprature];
}
@end
