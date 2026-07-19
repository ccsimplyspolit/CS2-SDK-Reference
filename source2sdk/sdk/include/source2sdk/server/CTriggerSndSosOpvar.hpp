#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Size: 0xc48
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x8e8            
            // metadata: MNotSaved
            VectorWS m_flPosition; // 0x900            
            float m_flCenterSize; // 0x90c            
            float m_flMinVal; // 0x910            
            float m_flMaxVal; // 0x914            
            CUtlSymbolLarge m_opvarName; // 0x918            
            CUtlSymbolLarge m_stackName; // 0x920            
            CUtlSymbolLarge m_operatorName; // 0x928            
            bool m_bVolIs2D; // 0x930            
            // metadata: MNotSaved
            char m_opvarNameChar[256]; // 0x931            
            // metadata: MNotSaved
            char m_stackNameChar[256]; // 0xa31            
            // metadata: MNotSaved
            char m_operatorNameChar[256]; // 0xb31            
            uint8_t _pad0c31[0x3]; // 0xc31
            // metadata: MNotSaved
            Vector m_VecNormPos; // 0xc34            
            // metadata: MNotSaved
            float m_flNormCenterSize; // 0xc40            
            uint8_t _pad0c44[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xc48);
    };
};
