//
//  APLogController.h
//  ApportablePlugin
//
//  Created by John Holdsworth on 01/05/2014.
//  Copyright (c) 2014 John Holdsworth. All rights reserved.
//

#import "APConsoleController.h"

@interface APLogController : APConsoleController

@property (nonatomic,assign) IBOutlet NSSearchField *filter;
@property (nonatomic,assign) IBOutlet NSButton *paused;

@property (nonatomic,strong) NSMutableArray *lineBuffer;
@property (atomic,strong) NSMutableString *incoming;
@property (atomic,strong) NSLock *lock;

@end
