//
//  MLGLayout.h
//  OrderList
//
//  Created by jianxin.li on 16/7/23.
//  Copyright © 2016年 m6go.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MLGOrderHeaderDef.h"

typedef NS_ENUM(NSInteger,MUOrderState) {
    MUOrderStateCanceled           = -10, // 已取消
    MUOrderStateRejection          = -4,  // 拒收
    MUOrderStateTransactionFailure = -1,  // 交易失败
    MUOrderStateNewOrder           = 0,   // 新订单
    MUOrderStateDealINg            = 15,  // 处理中
    MUOrderStatePaid               = 20,  // 已付款
    MUOrderStatePrepareFGoods      = 21,  // 备货中
    MUOrderStatePicking            = 22,  // 配货中
    MUOrderStatePartSendOut        = 23,  // 部分发货
    MUOrderStateWarehouseOut       = 26,  // 已出库
    MUOrderStateOutonLoan          = 30,  // 已发货
    MUOrderStateCompleted          = 40,  // 已完成
    MUOrderStateTest               = -20, // 测试订单
};

@interface MLGLayout : NSObject

- (instancetype)initWithOrderModel:(MLGOrderModel *)orderModel orderCategory:(NSUInteger)orderCategory index:(NSUInteger)index;
- (void)layout;

/** 数据 */
@property (nonatomic, strong) MLGOrderModel *orderModel;
/** 订单状态 */
@property (nonatomic, assign) MUOrderState orderState;
/** 索引 */
@property (nonatomic, assign) NSUInteger index;
/** 商品sku */
@property (nonatomic, assign) NSUInteger skus;

/** 订单类别 */
@property (nonatomic, assign) NSUInteger orderCategory;
/** Header总高度 */
@property (nonatomic, assign) CGFloat headerHeight;
/** Footer总高度 */
@property (nonatomic, assign) CGFloat footerHeight;

/** 是否隐藏space */
@property (nonatomic, assign, getter=isHiddenSpace) BOOL hiddenSpace;
/** 是否隐藏remindView */
@property (nonatomic, assign, getter=isHiddenRemind) BOOL hiddenRemind;
/** 是否隐藏logisticsView */
@property (nonatomic, assign, getter=isHiddenLogistics) BOOL hiddenLogistics;
/** 是否隐藏BottomView */
@property (nonatomic, assign, getter=isHiddenBottom) BOOL hiddenBottom;

/** 是否隐藏分隔线 */
@property (nonatomic, assign, getter=isHiddenRemindLine) BOOL hiddenRemindLine;
@property (nonatomic, assign, getter=isHiddenStatusLine) BOOL hiddenStatusLine;
@property (nonatomic, assign, getter=isHiddenLogisticsLine) BOOL hiddenLogisticsLine;
@property (nonatomic, assign, getter=isHiddenBottomLine) BOOL hiddenBottomLine;


@end
