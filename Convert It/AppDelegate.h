//
//  AppDelegate.h
//  Convert It
//
//  Created by Luigi Freitas on 2/7/14.
//  Copyright (c) 2014 Luigi Freitas. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <stdio.h>



@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;


@property (weak) IBOutlet NSTextField *temp;
@property (weak) IBOutlet NSTextField *input;
- (IBAction)submit:(id)sender;


@property (weak) IBOutlet NSTextField *temp2;
@property (weak) IBOutlet NSTextField *input2;
- (IBAction)submit2:(id)sender;


- (IBAction)link:(id)sender;


@end


