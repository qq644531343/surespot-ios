//
//  ChatUtils.h
//  surespot
//
//  Created by Adam on 10/3/13.
//  Copyright (c) 2013 2fours. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChatUtils : NSObject
+ (NSString *)  getOtherUserWithFrom: (NSString *) from andTo: (NSString *) to;
    
@end
