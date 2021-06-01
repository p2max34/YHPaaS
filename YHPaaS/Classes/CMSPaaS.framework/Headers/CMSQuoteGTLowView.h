//
//  CMSQuoteGTLowView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteGTLowItem : NSObject
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, assign) CGFloat changeAmount;
@property (nonatomic, assign) CGFloat changeRate;
@property (nonatomic, assign) CGFloat amount;
@end

typedef void(^CMSQuoteGTLowViewClickedBlock)(NSString *uri);

@interface CMSQuoteGTLowView : UIView
@property (nonatomic, copy) CMSQuoteGTLowViewClickedBlock clickedBlock;
@property (nonatomic, strong) CMSQuoteGTLowItem *dataModel;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *name;

- (instancetype)initWithFrame:(CGRect)frame
                    DataModel:(CMSQuoteGTLowItem* _Nullable)model
                 clickedBlock:(CMSQuoteGTLowViewClickedBlock)clickedBlock;

@end

NS_ASSUME_NONNULL_END
