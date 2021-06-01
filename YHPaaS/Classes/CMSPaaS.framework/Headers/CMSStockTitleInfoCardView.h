//
//  CMSPlateInfoCardView.h
//  CMSPaaS
//
//  Created by sway on 2021/1/5.
//

#import <UIKit/UIKit.h>
#import "CMSStockTitleInfoView.h"


typedef void(^CMSStockTitleInfoCardViewClickedBlock)(id model, UIView *actionView);

@interface CMSStockTitleInfoCardView : UIScrollView
@property (nonatomic, copy) CMSStockTitleInfoCardViewClickedBlock clickedBlock;

- (instancetype)initWithFrame:(CGRect)frame
                    Datas:(NSArray <CMSStockTitleInfoItem *> *)datas
                    clickedBlock:(CMSStockTitleInfoCardViewClickedBlock)clickedBlock;

- (void)updateData:(NSArray <CMSStockTitleInfoItem *> *)datas;
@end


