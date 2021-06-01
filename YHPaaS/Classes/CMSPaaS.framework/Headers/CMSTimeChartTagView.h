//
//  CMSQuotesPlateTimeLineView.h
//  CMSTimeLineView
//
//  Created by sway on 2021/4/13.
//

#import "CMSTimeLineView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSTimeChartTagItem : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, assign) BOOL positive;
@end

typedef void(^CMSTimeChartTagViewClickedBlock)(CMSTimeChartTagItem *item);
@interface CMSTimeChartTagView : CMSTimeLineView
@property (nonatomic, copy) CMSTimeChartTagViewClickedBlock clickedBlock;
@property (nonatomic, strong) NSArray <CMSTimeChartTagItem *> *nodes;
@end

NS_ASSUME_NONNULL_END
