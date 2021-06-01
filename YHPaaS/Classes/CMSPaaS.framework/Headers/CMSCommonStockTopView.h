//
//  CMSCommonStockTopView.h
//  CMSPaaS
//
//  Created by SJ on 2020/12/30.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"

NS_ASSUME_NONNULL_BEGIN

//不可排序，自定义是否滑动 表头view
@interface CMSCommonStockTopView : UIView

//阴影分割线
@property (nonatomic, strong) UIImageView *shadowImgView;
//最左边的编辑按钮
@property (nonatomic, strong) UIButton *editBtn;
@property (nonatomic, assign) NSUInteger otherColumnNumPerScreen;//一屏幕可容几个cell(需先于keysArray配置)
@property (nonatomic, copy) NSString *firstColumnWidth;//左边股票标题区域占比，判断有“%"则为比例，无则为固定值(需先于keysArray配置)
//表头数据
@property (nonatomic, copy)   NSArray<CMSStockHeaderModel *> *titles;
//右边菜单栏的背景视图
@property (nonatomic, strong) UIScrollView * rightScrollView;
@property (nonatomic, assign) BOOL isScrolling; //是否正在滑动
@property (nonatomic, copy) void(^horizontalScrollBlock)(BOOL isScrolling);
@property (nonatomic, copy) void(^scrollViewDidScrollBlock)(CGPoint offset,NSArray <NSString*>*visibleTitles);
@property (nonatomic, copy) void(^scrollViewDidEndBlock)(CGPoint offset);


@end

NS_ASSUME_NONNULL_END
