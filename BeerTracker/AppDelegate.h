//  AppDelegate.h
//  BeerTracker
//  Copyright (c) 2013 Ray Wenderlich. All rights reserved.

#import <UIKit/UIKit.h>

@class TAGManager;
@class TAGContainer;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) TAGManager *tagManager;
@property (nonatomic, strong) TAGContainer *container;
@end
