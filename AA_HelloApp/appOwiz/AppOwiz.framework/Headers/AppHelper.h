//
//  AppHelper.h
//  appOwiz
//
//  Created by appOwiz team.
//  Copyright (c) 2016 appOwiz. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "CrashReporter.h"
#import <UIKit/UIKit.h>

extern NSString * const BSKNewLogMessageNotification;

/**
 * Crash Reporter error domain
 */
typedef NS_ENUM (NSInteger, BITBinaryImageType) {
    /**
     *  App binary
     */
    BITBinaryImageTypeAppBinary,
    /**
     *  App provided framework
     */
    BITBinaryImageTypeAppFramework,
    /**
     *  Image not related to the app
     */
    BITBinaryImageTypeOther
};

/**
 *AppHelper class is the main class for appOwiz functionality
 *
 *AppHeper class is used in intialize the appOwiz SDK and provides navigation to the various functionality provided in the SDK
 */
@interface AppHelper : UIViewController <UIGestureRecognizerDelegate>
/** @name Public Methods */

+ (AppHelper *) initCapture;

- (void) didReceiveTouchAtLoction:(CGPoint)tapOnWindow;
/** Call this method to check if App token integrated with app is valid.First webservice call at startup of appOwiz.
 * If token is valid allow other operations, else disable the operations and show alert message.</br>
 */
- (void) callDevicecheckWS;
- (void) startAppOwizFunctionality;
- (void) confirmAppOwizStartup:(BOOL)isCrashReporting withFeedback:(BOOL)isFeedback;
/**
 *  Shows popup which asks user if they want to use appOwiz to send feedback/bug report to appOwiz server
 */
- (void) confirmAppOwizStartup;
- (void) OpenRadicalMenu;

/** @name Public Properties */
/**
 *  Used to shows touch location on window when screen recording is ongoing
 */
@property(nonatomic) CGPoint touchLocationOnWindow;
/**
 *  Property used to check the previous/ongoing reports is completed or not before again doing check
 */
@property (nonatomic) BOOL isCompleted;
/**
 *  property used in writting the debug log to the file
 */
@property (nonatomic) NSUInteger consoleLogMaxLines;
/**
 *  main window which is a key window at start time, where the floating button is added
 */
@property (nonatomic,strong) UIWindow *mainWindow;

@property (nonatomic) BOOL isInitialCall;

@end
