//
//  BaseView.h
//  SuperPaper
//
//  Created by AppStudio on 16/1/9.
//  Copyright © 2016年 Share technology. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseView : UIView

@property (nonatomic, strong) NSString * topBarTitle;

- (UIView *)layoutContentView;

@end
