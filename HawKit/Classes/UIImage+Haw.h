//
//  UIImage+HW.h
//  HWExercises
//
//  Created by sxmaps_w on 2017/5/22.
//  Copyright © 2017年 wqb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Haw)

//根据颜色返回纯色图片（宽高为1像素）
+ (UIImage *)imageWithColor:(UIColor *)color;
//根据颜色返回指定frame的纯色图片（指定frame大小）
+ (UIImage *)imageWithColor:(UIColor *)color frame:(CGRect)rect;
//同步方法获取网络图片
+ (UIImage *)imageWithUrlString:(NSString *)urlString;

@end
