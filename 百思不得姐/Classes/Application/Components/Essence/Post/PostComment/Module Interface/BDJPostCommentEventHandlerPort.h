//
//  BDJPostCommentEventHandlerPort.h
//  百思不得姐
//
//  Created by 付星 on 2016/11/29.
//    Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFEventHandlerPort.h"

@class XFExpressPiece;
@protocol BDJPostCommentEventHandlerPort <XFEventHandlerPort>

- (RACDisposable *)didPostCommentHeaderRefresh;
- (RACSignal *)didPostCommentFooterRefresh;
@end
