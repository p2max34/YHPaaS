//
//  CMSRecommendTargetInfoScrollView.h
//  CMSPaaS
//
//  Created by sway on 2020/12/31.
//

#import <UIKit/UIKit.h>
#import "CMSRecommendTargetInfoView.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^CMSTargetDataLabelClickedBlock)(id model, UIView *actionView);

@interface CMSRecommendTargetInfoScrollView : UIScrollView
@property (nonatomic, copy) CMSTargetDataLabelClickedBlock clickedBlock;

- (instancetype)initWithFrame:(CGRect)frame
                    Datas:(NSArray <CMSRecommendTargetInfoModel *> *)datas
                    clickedBlock:(CMSTargetDataLabelClickedBlock)clickedBlock;

- (void)updateData:(NSArray <CMSRecommendTargetInfoModel *> *)datas;
@end

NS_ASSUME_NONNULL_END
