//
//  CMSGridCollectionLeftRightView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol CMSTitleIconModelProtocol;
@interface CMSGridCollectionLeftRightView : UICollectionView

@property (nonatomic, strong) NSArray<id<CMSTitleIconModelProtocol>> *gridItems;

@property (nonatomic, strong) NSString *textColorKey;
@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, strong) void(^tapCellCallBack)(id<CMSTitleIconModelProtocol> model, NSInteger index);


@end

@protocol CMSTitleIconModelProtocol;
@interface CMSGridCollectionIconTitleCell : UICollectionViewCell
@property (nonatomic, strong) id<CMSTitleIconModelProtocol> contentModel;
@property (nonatomic, assign) BOOL isShowLine;
@property (nonatomic, strong) void(^tapCallBack)(id<CMSTitleIconModelProtocol> model);

@property (nonatomic, strong) UIButton *contentBtn;
@end


NS_ASSUME_NONNULL_END
