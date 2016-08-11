//
//  SPTextView.h
//  Simplenote
//
//  Created by Michael Johnston on 8/7/13.
//  Copyright (c) 2013 Simperium. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol SPTextViewDelegate <NSTextViewDelegate>
- (void)didClickTextView:(id)sender;
@end

@interface SPTextView : NSTextView

@end
