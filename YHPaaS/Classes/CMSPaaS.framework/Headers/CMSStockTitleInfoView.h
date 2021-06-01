//
//  CMSStockTitleInfoView.h
//  CMSPaaS
//
//  Created by sway on 2021/1/5.
//

#import <UIKit/UIKit.h>
#import "CMSInfomationBottomBar.h"

NS_ASSUME_NONNULL_BEGIN
@interface CMSStockTitleInfoItem : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *gains;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, assign) NSInteger index;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, strong) NSArray <CMSTargetDataLabelModel *>  *targetDatas;
@end

typedef void(^CMSStockTitleInfoViewClickedBlock)(id model, UIView *actionView);

@interface CMSStockTitleInfoView : UIView
@property (nonatomic, copy) CMSStockTitleInfoViewClickedBlock clickedBlock;
@property (nonatomic, strong) CMSStockTitleInfoItem *dataModel;


- (instancetype)initWithFrame:(CGRect)frame
                    DataModel:(CMSStockTitleInfoItem*)model
                    clickedBlock:(CMSStockTitleInfoViewClickedBlock)clickedBlock;
@end

NS_ASSUME_NONNULL_END
