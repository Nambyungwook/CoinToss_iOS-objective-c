//
//  AppDelegate.h
//  CoinToss
//
//  Created by 박미경 on 22/04/2019.
//  Copyright © 2019 Nambyungwook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

