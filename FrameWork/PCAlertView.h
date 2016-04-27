//
//  PCAlertView.h
//  CustomAlertView
//
//  Created by sinking love on 16/4/25.
//  Copyright © 2016年 sinking love. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LMModalItemTableViewCell.h"
#import "RBBSpringAnimation.h"

#define kSpringAnimationClassName RBBSpringAnimation
@interface PCAlertView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, strong, readonly) UIView *contentView;
@property (nonatomic) BOOL keepTopAlignment;
@property (unsafe_unretained) id<UIAlertViewDelegate> delegate;

@property(nonatomic) NSInteger cancelButtonIndex;
@property(nonatomic, readonly) NSInteger firstOtherButtonIndex;
@property(nonatomic, copy) NSString *message;
@property(nonatomic, readonly) NSInteger numberOfButtons;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, readonly, getter=isVisible) BOOL visible;
@property(nonatomic) BOOL buttonsShouldStack;
//对外提供的开放接口
@property(nonatomic,strong)	UILabel *titleLabel;
@property (nonatomic, strong) UILabel *messageLabel;
@property (nonatomic, strong) UITableView *buttonTableView;
@property (nonatomic, strong) UITableView *otherTableView;

- (id)initWithSize:(CGSize)size;
- (id)initWithViewController:(UIViewController *)viewController;
- (id)initWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;

- (void)setSize:(CGSize)size animated:(BOOL)animated;
- (void)setSize:(CGSize)size;
- (CGSize)size;

- (void)show;
- (void)dismissWithClickedButtonIndex:(NSInteger)buttonIndex animated:(BOOL)animated;

- (LMModalItemTableViewCell *)buttonCellForIndex:(NSInteger)buttonIndex;
@end