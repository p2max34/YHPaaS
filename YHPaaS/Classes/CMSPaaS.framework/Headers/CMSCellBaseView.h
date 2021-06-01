//
//  CMSCellBaseView.h
//  CMSPaaS
//
//  Created by HJ on 2020/11/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CMSHomeCellViewCloseBlock)(UIView *actionView);

@interface CMSCellBaseView : UIView

@property (nonatomic, strong) CMSHomeCellViewCloseBlock closeBlock;

@end

NS_ASSUME_NONNULL_END
