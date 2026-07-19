#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xff8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FuncConveyor : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x8]; // 0xfb0
            Vector m_vecMoveDirEntitySpace; // 0xfb8            
            float m_flTargetSpeed; // 0xfc4            
            source2sdk::entity2::GameTick_t m_nTransitionStartTick; // 0xfc8            
            std::int32_t m_nTransitionDurationTicks; // 0xfcc            
            float m_flTransitionStartSpeed; // 0xfd0            
            uint8_t _pad0fd4[0x4]; // 0xfd4
            // m_hConveyorModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hConveyorModels;
            char m_hConveyorModels[0x18]; // 0xfd8            
            float m_flCurrentConveyorOffset; // 0xff0            
            float m_flCurrentConveyorSpeed; // 0xff4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncConveyor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncConveyor) == 0xff8);
    };
};
