//
//  AppDelegate.h
//  Temprature Converter
//
//  Created by Sandeep Verma on 08/04/17.
//  Copyright © 2017 Code Maker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

