//
//  CMSPlaceOrderPickerView.h
//  CMSPaaS
//
//  Created by 吴演 on 2020/12/11.
//

#import "CMSMonitoringPickerView.h"

typedef void(^CMSPlaceOrderPickerViewBlock)(NSInteger selectedIndex);

@interface CMSPlaceOrderPickerView : CMSMonitoringPickerView

@property (nonatomic, copy) CMSPlaceOrderPickerViewBlock block;

+ (void)show:(NSArray<NSString *> *)dataArray
                defaultSelected:(NSInteger)selectedIndex
                    title:(NSString *)title
                        selectedBlock:(CMSPlaceOrderPickerViewBlock)selectedBlock;

@end
