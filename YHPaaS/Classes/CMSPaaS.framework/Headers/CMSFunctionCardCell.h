//
//  CMSDetailsIntroductionCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSFunctionCardModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *details;
@property (nonatomic, copy) NSString *detailsHighlight;
@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *display;
@property (nonatomic, assign) BOOL   showBadge;

@end

@interface CMSFunctionCardCell : UICollectionViewCell

@property (nonatomic, strong) CMSFunctionCardModel *model;

@end

NS_ASSUME_NONNULL_END
