#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlatTrain.hpp"
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
        // Size: 0x848
        // Has VTable
        #pragma pack(push, 1)
        class CFuncTrain : public source2sdk::server::CBasePlatTrain
        {
        public:
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x828            
            bool m_activated; // 0x82c            
            uint8_t _pad082d[0x3]; // 0x82d
            // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemy;
            char m_hEnemy[0x4]; // 0x830            
            float m_flBlockDamage; // 0x834            
            source2sdk::entity2::GameTime_t m_flNextBlockTime; // 0x838            
            uint8_t _pad083c[0x4]; // 0x83c
            CUtlSymbolLarge m_iszLastTarget; // 0x840            
            
            // Datamap fields:
            // void CFuncTrainWait; // 0x0
            // void CFuncTrainNext; // 0x0
            // void InputToggle; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrain) == 0x848);
    };
};
