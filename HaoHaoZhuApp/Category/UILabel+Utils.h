//
//  UILabel+Utils.h
//  delivelyuser
//
//  Created by Brances on 2018/8/27.
//  Copyright © 2018年 HBL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Utils)

- (void)setText:(NSString*)text lineSpacing:(CGFloat)lineSpacing;
- (void)setCommentText:(NSString*)text lineSpacing:(CGFloat)lineSpacing beginColorRange:(NSRange)range;
/** 默认文本高度 */
+ (CGFloat)text:(NSString*)text heightWithFontSize:(CGFloat)fontSize width:(CGFloat)width lineSpacing:(CGFloat)lineSpacing;
+ (CGFloat)text:(NSString*)text boldHeightWithFontSize:(CGFloat)fontSize width:(CGFloat)width lineSpacing:(CGFloat)lineSpacing;

@end
