//
//  CMSCommonEmptyView.h
//  CMSPaaSBenchmark
//
//  Created by Bright on 2020/11/11.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CMSRefreshBtnCallBack)(void);

@interface CMSCommonEmptyView : UIView

/// CMSCommonEmptyView
/// @param title mast add hint title
/// @param image mast add hint image
/// @param text default nil hide refreshButton
/// @param refreshCallBack default nil hide refreshButtonCallBack
- (instancetype)initWithTitle:(nonnull NSString *)title
                        image:(nonnull UIImage *)image
                   buttonText:(nullable NSString *)text
              refreshCallBack:(nullable CMSRefreshBtnCallBack)refreshCallBack ;
///imageKey
- (instancetype)initWithTitle:(nonnull NSString *)title
          imageKey:(nonnull NSString *)imageKey
     buttonText:(nullable NSString *)text
              refreshCallBack:(nullable CMSRefreshBtnCallBack)refreshCallBack ;
@property (nonatomic, assign) BOOL needTheme;
@end

NS_ASSUME_NONNULL_END
