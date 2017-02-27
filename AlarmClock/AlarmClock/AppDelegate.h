//
//  AppDelegate.h
//  AlarmClock
//
//  Created by lizhen on 17/2/27.
//  Copyright © 2017年 lizhen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

