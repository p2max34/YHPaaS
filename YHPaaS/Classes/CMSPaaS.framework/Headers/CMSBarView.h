//
//  CMSBarView.h
//  CMSHistogramViewDemo
//
//  Created by HJ on 2021/1/14.
//  Copyright © 2021 HJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSHistogramModel.h"
NS_ASSUME_NONNULL_BEGIN


@interface CMSBarView : UIView

@property (nonatomic, strong) CMSHistogramModel *dataModel;

- (instancetype)initWithFrame:(CGRect)frame
                      animate:(BOOL)animate
                 controlSpace:(CGFloat)controlSpace
                    dataModel:(CMSHistogramModel *)dataModel
                  barCallBack:(void(^ _Nullable )(CMSHistogramModel *model))callBack;
@end

NS_ASSUME_NONNULL_END
