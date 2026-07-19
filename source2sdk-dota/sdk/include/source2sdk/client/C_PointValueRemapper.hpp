#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x668
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointValueRemapper : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bDisabled; // 0x5f0            
            bool m_bDisabledOld; // 0x5f1            
            bool m_bUpdateOnClient; // 0x5f2            
            uint8_t _pad05f3[0x1]; // 0x5f3
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x5f4            
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x4]; // 0x5f8            
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x4]; // 0x5fc            
            float m_flMaximumChangePerSecond; // 0x600            
            float m_flDisengageDistance; // 0x604            
            float m_flEngageDistance; // 0x608            
            bool m_bRequiresUseKey; // 0x60c            
            uint8_t _pad060d[0x3]; // 0x60d
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x610            
            uint8_t _pad0614[0x4]; // 0x614
            // metadata: MNotSaved
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x18]; // 0x618            
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x630            
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x634            
            float m_flMomentumModifier; // 0x638            
            float m_flSnapValue; // 0x63c            
            float m_flCurrentMomentum; // 0x640            
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x644            
            float m_flRatchetOffset; // 0x648            
            float m_flInputOffset; // 0x64c            
            bool m_bEngaged; // 0x650            
            bool m_bFirstUpdate; // 0x651            
            uint8_t _pad0652[0x2]; // 0x652
            float m_flPreviousValue; // 0x654            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x658            
            VectorWS m_vecPreviousTestPoint; // 0x65c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointValueRemapper) == 0x668);
    };
};
