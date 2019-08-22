--
-- CREATE_INDEX
-- Create ancillary data structures (i.e. indices)
--

--
-- LSM
--
CREATE INDEX onek_unique1 ON onek USING lsm(unique1 int4_ops);

CREATE INDEX IF NOT EXISTS onek_unique1 ON onek USING lsm(unique1 int4_ops);

CREATE INDEX IF NOT EXISTS ON onek USING lsm(unique1 int4_ops);

CREATE INDEX onek_unique2 ON onek USING lsm(unique2 int4_ops);

CREATE INDEX onek_hundred ON onek USING lsm(hundred int4_ops);

CREATE INDEX onek_stringu1 ON onek USING lsm(stringu1 name_ops);

CREATE INDEX tenk1_unique1 ON tenk1 USING lsm(unique1 int4_ops);

CREATE INDEX tenk1_unique2 ON tenk1 USING lsm(unique2 int4_ops);

CREATE INDEX tenk1_hundred ON tenk1 USING lsm(hundred int4_ops);

CREATE INDEX tenk1_thous_tenthous ON tenk1 (thousand, tenthous);

CREATE INDEX tenk2_unique1 ON tenk2 USING lsm(unique1 int4_ops);

CREATE INDEX tenk2_unique2 ON tenk2 USING lsm(unique2 int4_ops);

CREATE INDEX tenk2_hundred ON tenk2 USING lsm(hundred int4_ops);

CREATE INDEX rix ON road USING lsm (name text_ops);

CREATE INDEX iix ON ihighway USING lsm (name text_ops);

CREATE INDEX six ON shighway USING lsm (name text_ops);
