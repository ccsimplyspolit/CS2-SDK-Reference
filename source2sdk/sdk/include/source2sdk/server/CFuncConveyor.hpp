#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncConveyor : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_szConveyorModels; // 0x770            
            float m_flTransitionDurationSeconds; // 0x778            
            float m_flSpeed; // 0x77c            
            QAngle m_angMoveEntitySpace; // 0x780            
            Vector m_vecMoveDirEntitySpace; // 0x78c            
            float m_flTargetSpeed; // 0x798            
            source2sdk::entity2::GameTick_t m_nTransitionStartTick; // 0x79c            
            std::int32_t m_nTransitionDurationTicks; // 0x7a0            
            float m_flTransitionStartSpeed; // 0x7a4            
            // m_hConveyorModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hConveyorModels;
            char m_hConveyorModels[0x18]; // 0x7a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncConveyor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncConveyor) == 0x7c0);
    };
};
