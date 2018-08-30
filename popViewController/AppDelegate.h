//
//  AppDelegate.h
//  popViewController
//
//  Created by eCloud_Song on 2018/8/30.
//  Copyright © 2018年 pengwei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

