#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xe8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class MovementData
        {
        public:
            Vector m_goalWayPointPos; // 0x0            
            // m_vMoveDir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<Vector> m_vMoveDir;
            char m_vMoveDir[0x14]; // 0xc            
            // m_vAcceleration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<Vector> m_vAcceleration;
            char m_vAcceleration[0x14]; // 0x20            
            // m_flCurrentMoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCurrentMoveSpeed;
            char m_flCurrentMoveSpeed[0xc]; // 0x34            
            // m_flTargetMoveSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flTargetMoveSpeed;
            char m_flTargetMoveSpeed[0xc]; // 0x40            
            // m_flGoalDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flGoalDistance;
            char m_flGoalDistance[0xc]; // 0x4c            
            // m_flBoundaryRadius has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flBoundaryRadius;
            char m_flBoundaryRadius[0xc]; // 0x58            
            bool m_bGoalChanged; // 0x64            
            uint8_t _pad0065[0x3]; // 0x65
            // m_bHasPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<bool> m_bHasPath;
            char m_bHasPath[0xc]; // 0x68            
            // m_flFacingHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flFacingHeading;
            char m_flFacingHeading[0xc]; // 0x74            
            Vector m_vManualFacingDirection; // 0x80            
            VectorWS m_vManualFacingTarget; // 0x8c            
            // m_nFacingMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint8_t> m_nFacingMode;
            char m_nFacingMode[0xc]; // 0x98            
            // m_bForceFacing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<bool> m_bForceFacing;
            char m_bForceFacing[0xc]; // 0xa4            
            // m_nActiveMotorIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::int32_t> m_nActiveMotorIndex;
            char m_nActiveMotorIndex[0xc]; // 0xb0            
            // m_bOnGround has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<bool> m_bOnGround;
            char m_bOnGround[0xc]; // 0xbc            
            // m_vFacingPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<Vector> m_vFacingPosition;
            char m_vFacingPosition[0x14]; // 0xc8            
            Vector m_vPrevFacingPosition; // 0xdc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_goalWayPointPos) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_vMoveDir) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_vAcceleration) == 0x20);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_flCurrentMoveSpeed) == 0x34);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_flTargetMoveSpeed) == 0x40);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_flGoalDistance) == 0x4c);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_flBoundaryRadius) == 0x58);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_bGoalChanged) == 0x64);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_bHasPath) == 0x68);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_flFacingHeading) == 0x74);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_vManualFacingDirection) == 0x80);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_vManualFacingTarget) == 0x8c);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_nFacingMode) == 0x98);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_bForceFacing) == 0xa4);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_nActiveMotorIndex) == 0xb0);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_bOnGround) == 0xbc);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_vFacingPosition) == 0xc8);
        static_assert(offsetof(source2sdk::animgraphlib::MovementData, m_vPrevFacingPosition) == 0xdc);
        
        static_assert(sizeof(source2sdk::animgraphlib::MovementData) == 0xe8);
    };
};
