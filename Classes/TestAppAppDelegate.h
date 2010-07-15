//
//  TestAppAppDelegate.h
//  TestApp
//
//  Created by Victor Khanna on 14/07/10.
//  Copyright Sourcebits Technologies  2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

